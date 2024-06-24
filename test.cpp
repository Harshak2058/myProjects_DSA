int main() {
    const char* msg = "Hello, World!\n";
    void* stdout_handle;
    unsigned long written;

    // Inline assembly to call GetStdHandle
    asm (
        "mov eax, 0xFFFFFFF5;"           // GetStdHandle(STD_OUTPUT_HANDLE)
        "call dword ptr [__imp__GetStdHandle@4];"
        "mov %0, eax;"                   // Store handle in stdout_handle
        : "=r"(stdout_handle)            // Output
        :                                // Input
        : "eax"                          // Clobbered register
    );

    // Inline assembly to call WriteConsoleA
    asm (
        "mov eax, %0;"                   // stdout_handle
        "mov ecx, %1;"                   // msg
        "mov edx, 13;"                   // Message length
        "lea ebx, [esp + 4];"            // Address to store number of characters written
        "push 0;"                        // Reserved, must be NULL
        "push ebx;"                      // lpNumberOfCharsWritten
        "push 13;"                       // nNumberOfCharsToWrite
        "push %1;"                       // lpBuffer
        "push %0;"                       // hConsoleOutput
        "call dword ptr [__imp__WriteConsoleA@20];"
        :
        : "r"(stdout_handle), "r"(msg)   // Inputs
        : "eax", "ecx", "edx", "ebx"     // Clobbered registers
    );

    return 0;
}
