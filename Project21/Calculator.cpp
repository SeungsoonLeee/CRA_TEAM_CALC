class Calculator {
public:
	int getSum(int a, int b) {
		return a + b;
	}
	int getGop(int a, int b) {
		return a * b;
	}
	int getZegop(int a, int b) {
		int result{ a };
		while (--b) {
			result = result * a;
		}
		return result;
	}
	int getMinus(int a, int b) {
		return a - b;
	}
	int getDivide(int a, int b) {
		return a / b;
	}
	int getSumSum(int a, int b) {
		return a+a+b+b;
	}
};
