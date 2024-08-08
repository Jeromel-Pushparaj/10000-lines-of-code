#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 8;
    int requests[] = {98, 183, 41, 122, 14, 124, 65, 67};
    int head = 53, seek_sequence[20], seek_count = 0, distance, cur_track;
    int size = 8;
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (requests[i] > requests[j]) {
                temp = requests[i];
                requests[i] = requests[j];
                requests[j] = temp;
            }
        }
    }

    int pos;
    for (int i = 0; i < n; i++) {
        if (head < requests[i]) {
            pos = i;
            break;
        }
    }

    for (int i = pos; i < n; i++) {
        cur_track = requests[i];
        seek_sequence[seek_count++] = cur_track;
        distance = abs(cur_track - head);
       

 head = cur_track;
    }

    for (int i = 0; i < pos; i++) {
        cur_track = requests[i];
        seek_sequence[seek_count++] = cur_track;
        distance = abs(cur_track - head);
        head = cur_track;
    }

    printf("Seek Sequence is:\n");
    for (int i = 0; i < seek_count; i++) {
        printf("%d ", seek_sequence[i]);
    }

    printf("\nTotal seek operations: %d\n", seek_count);

    return 0;
}
