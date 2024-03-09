// 3.Define a class TestResult with properies roll_no, right , wrong , net_score. Also
// define class properies right_weightage, wrong_weightage.Provide methods to set
// and get all the properies.

#include <iostream>
using namespace std;
class TestResult
{
private:
        int roll_no, right, wrong, netScore, right_weightage, wrong_weightage;

public:
        void setRollNo(int rn)
        {
                roll_no = rn;
        }
        void setRight(int r)
        {
                right = r;
        }
        void setWrong(int w)
        {
                wrong = w;
        }
        int NetScore()
        {
                netScore = rightWeightage() - wrongWeightage();
                return netScore;
        }
        int rightWeightage()
        {
                right_weightage = right * 5;
                return right_weightage;
        }
        int wrongWeightage()
        {
                wrong_weightage = wrong * 3;
                return wrong_weightage;
        }
        int getRollNo()
        {
                return roll_no;
        }
        int rightAns()
        {
                return right;
        }
        int wrongAns()
        {
                return wrong;
        }
};

// int main()
// {
//         TestResult rn1;
//         rn1.setRollNo(1);
//         rn1.setRight(5);
//         rn1.setWrong(3);
//         cout << "The netScore of roll Noo." << rn1.getRollNo() << " is " << rn1.NetScore() << endl
//              << "which has " << rn1.rightAns() << " Right answer and " << rn1.wrongAns() << " Wrong Answer" << endl;
//         return 0;
// }