#include <stdio.h>
int main() {
int nums[5] = {40, 30, 20, 50, 10};
int i = 0, j, temp;
while (i < 5) {
j = i + 1;
while (j < 5) {
if (nums[j] < nums[i]) {
temp = nums[i];
nums[i] = nums[j];
nums[j] = temp;
}
j++;
}
i++;
}
i = 0;
printf("Sorted (ascending): ");
while (i < 5) printf("%d ", nums[i++]);
return 0;
}