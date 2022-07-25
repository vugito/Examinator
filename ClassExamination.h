#pragma once
#include "ClassResult.h"
#include "ClassTest.h"

class Examination : public Result
{
private:

public:
	Test* p_testing = nullptr; // &test_array; //ssilka na obyekt classa Test iz massiva testov
	Result result_of_examination;
};

