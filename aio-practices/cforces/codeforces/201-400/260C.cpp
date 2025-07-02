#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<long long> boxes(n);
    long long total_operations = 0;
    long long min_value = LLONG_MAX;
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &boxes[i]);
        min_value = min(min_value, boxes[i]);
    }
    for (int i = 0; i < n; ++i) {
        boxes[i] -= min_value;
    }
    total_operations += min_value * n;
    int index = k - 1;
    while (boxes[index] > 0) {
        boxes[index]--;
        total_operations++;
        index--;
        if (index < 0) index = n - 1;
    }
    boxes[index] = total_operations;
    printf("%lld", boxes[0]);
    for (int i = 1; i < n; ++i) {
        printf(" %lld", boxes[i]);
    }
    putchar('\n');

    return 0;
}
