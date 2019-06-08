x = [1:100];

plot(x, x, ";n;", "linewidth", 3);
hold on;
plot(x, x.^2, ";n^2;", "linewidth", 3);
plot(x, x .* log10(x) / log10(2), ";n\log(n);", "linewidth", 3);

print ("graficos.pdf", "-dpdf");
