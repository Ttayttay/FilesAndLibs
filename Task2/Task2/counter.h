#pragma once

class counter {
public:

	counter();
	counter(int);

	int plus();
	int minus();
	int equal();

private:
	int count;
};