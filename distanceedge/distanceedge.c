#include <stdio.h>

#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    int height;
    int width;
    
    scanf("%d", &height);
    scanf("%d", &width);

    // Loop a grid
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int x_distance = min(x, width - x - 1) + 1;
            int y_distance = min(y, height - y - 1) + 1;
            int min_distance = min(x_distance, y_distance);

            if (min_distance > 9) {
                printf(".");
            } else {
                printf("%d", min(x_distance, y_distance));
            }
        }

        printf("\n");
    }
}