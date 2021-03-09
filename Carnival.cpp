#include<stdio.h>
int main() {
	float a, b, c, d, e;
	scanf(" %f %f %f %f %f", &a, &b, &c, &d, &e);
	float soma = a + b + c + d + e;
	if (a<=b and a<=c and a<=d and a<=e) {
		if (b>=a and b>=c and b>=d and b>=e) {
			printf("%.1f", soma - a - b);
		}
		else if (c>=a and c>=b and c>=d and c>=e) {
			printf("%.1f", soma - a - c);
		}
		else if (d>=a and d>=b and d>=c and d>=e) {
			printf("%.1f", soma - a - d);
		}
		else {
			printf("%.1f", soma - a - e);
		}
	}

	else if (b<=a and b<=c and b<=d and b<=e) {
		if (a>=b and a>=c and a>=d and a>=e) {
			printf("%.1f", soma - b - a);
		}
		else if (c>=a and c>=b and c>=d and c>=e) {
			printf("%.1f", soma - b - c);
		}
		else if (d>=a and d>=b and d>=c and d>=e) {
			printf("%.1f", soma - b - d);
		}
		else {
			printf("%.1f", soma - b - e);
		}
	}

	else if (c<=b and c<=a and c<=d and c<=e) {
		if (b>=a and b>=c and b>=d and b>= e) {
			printf("%.1f", soma - c - b);
		}
		else if (a>=c and a>=b and a>=d and a>=e) {
			printf("%.1f", soma - c - a);
		}
		else if (d>=a and d>=b and d>=c and d>=e) {
			printf("%.1f", soma - c - d);
		}
		else {
			printf("%.1f", soma - c - e);
		}
	}

	else if (d<=b and d<=c and d<=a and d<=e) {
		if (b>=a and b>=c and b>=d and b>= e) {
			printf("%.1f", soma - d - b);
		}
		else if (c>=a and c>=b and c>=d and c>=e) {
			printf("%.1f", soma - d - c);
		}
		else if (a>=d and a>=b and a>=c and a>=e) {
			printf("%.1f", soma - d - a);
		}
		else {
			printf("%.1f", soma - d - e);
		}
	}

	else if (e<=b and e<=c and e<=d and e<=a) {
		if (b>=a and b>=c and b>=d and b>= e) {
			printf("%.1f", soma - e - b);
		}
		else if (c>=a and c>=b and c>=d and c>=e) {
			printf("%.1f", soma - e - c);
		}
		else if (d>=a and d>=b and d>=c and d>=e) {
			printf("%.1f", soma - e - d);
		}
		else {
			printf("%.1f", soma - e - a);
		}
	}


	return 0;

}