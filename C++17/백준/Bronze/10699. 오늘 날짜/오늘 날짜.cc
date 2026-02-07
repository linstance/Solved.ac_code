#include <iostream>
#include <iomanip> // std::put_time을 사용하기 위한 헤더
#include <ctime>   // 시간 관련 함수 헤더

int main() {
    // 1. 현재 시스템의 시간(time_t)을 가져옵니다.
    std::time_t timer = std::time(nullptr);

    // 2. 시스템 시간을 현지 시간 구조체(tm)로 변환합니다.
    //
    std::tm* t = std::localtime(&timer);

    // 3. std::put_time을 사용하여 포맷을 지정하고 출력합니다.
    // %Y: 4자리 연도 (예: 2023)
    // %m: 2자리 월 (01~12) -> 자동으로 0을 채워줍니다.
    // %d: 2자리 일 (01~31) -> 자동으로 0을 채워줍니다.
    std::cout << std::put_time(t, "%Y-%m-%d") << std::endl;

    return 0;
}
