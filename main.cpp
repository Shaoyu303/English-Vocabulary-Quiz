#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    string words [] = {"adore", "affection", "conscious", "consciousness", "circumstance", "demonstrate", "demonstration", "determine", "determination", "exhibit", "exhibition", "gesture", "glance", "interpret", "interpretation", "initially", "initial", "moreover", "meaningful", "observe", "observation", "psychology", "psychological", "reverse", "stiff", "significant", "scratch", "track"};
    string chinese [] = {"愛慕", "喜愛", "意識到", "意識", "條件", "表達 : 展示", "表達 : 示範", "查明 : 測出 : 決定", "查明", "表現 : 表露 : 展覽", "表現;展覽", "用動作示意 : 手勢 : 姿勢", "匆匆一瞥", "理解", "解釋", "起初", "最初", "此外", "有意義的", "觀察", "觀察", "心理學", "心理上的", "相反的事物 ; 反轉 ; 相反的", "僵硬的", "重要的", "搔抓", "追蹤"};

    srand(time(0));
    int wordindex = rand()%28;
    cout << "\"" << chinese[wordindex] << "\"" << endl;

    string input;
    int attempts = 0;
    int max_attempts = 3;
    while (attempts < max_attempts){
    cout << "輸入答案: ";
    cin >> input;


    if(input == words[wordindex]){
       cout <<"答對";
       break;
    } else{
        attempts++;
        if(attempts < max_attempts)
        cout <<"答錯，你還剩下 " << max_attempts - attempts << " 次機會。" << endl;
    }
}

if(attempts == max_attempts){
    cout <<"答錯，" << max_attempts <<"次機會都用完了，正確答案是:" << words[wordindex] <<endl;
}
    return 0;
}
