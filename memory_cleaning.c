#include <stdlib.h>

int main() {
    // メモリサイズ（バイト数）
    size_t memory_size = 1000000000;  // 1 GB

    // メモリの確保
    void* memory = malloc(memory_size);
    if (memory == NULL) {
        // メモリの確保に失敗した場合のエラーハンドリング
        return 1;
    }

    // メモリの解放
    free(memory);

    return 0;
}