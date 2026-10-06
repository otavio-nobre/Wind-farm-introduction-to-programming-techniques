#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) return 0;

    long long total = 0;
    long long max_production = -1;
    int best_turbine = 1;

    for (int i = 1; i <= n; i++) {
        long long current_production;
        scanf("%lld", &current_production);

        total += current_production;

        if (current_production > max_production) {
            max_production = current_production;
            best_turbine = i;
        }
    }

    long long average = total / n;

    printf("%lld\n", total);
    printf("%d\n", best_turbine);
    printf("%lld\n", average);

    return 0;
}
