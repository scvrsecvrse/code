/*

static int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
TEST(TestCaseName, TestName) {
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}
TEST(FactorialTest, HandlesZeroInput) {
    EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(4), 24);
    EXPECT_EQ(factorial(5), 120);
}

int main() {
    ::testing::InitGoogleTest();
        return RUN_ALL_TESTS();
}
*/
#include <iostream>
#include <string>
#include <D:\vcpkg\vcpkg\installed\x64-windows\include\gtest\gtest.h>

bool areEqual(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }   //tollower - преоброзование в нижний регистр
    for (int i = 0; i < str1.length(); ++i) {
        if (tolower(str1[i]) != tolower(str2[i])) {
            return false;
        }
    }
    return true;
}

TEST(strtests, allhappends) {
    // Проверка равенства одинаковых строк
    EXPECT_TRUE(areEqual("Hello", "Hello"));

    // Проверка равенства строк разной длины
    EXPECT_TRUE(!areEqual("Hello", "Hello!"));

    // Проверка равенства строк с разным регистром
    EXPECT_TRUE(areEqual("Hello", "hello"));

    // Проверка неравенства различных строк
    EXPECT_TRUE(!areEqual("Hello", "World"));

    // Проверка равенства пустых строк
    EXPECT_TRUE(areEqual("", ""));

}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}


