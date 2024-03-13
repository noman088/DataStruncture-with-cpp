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
        TestResult(){};
        TestResult(int rn, int r, int w)
        {
                roll_no = rn;
                right = r;
                wrong = w;
        }

        void setRollNo()
        {
                int n;
                cout << "Enter roll Number : " << endl;
                cin >> n;
                roll_no = n;
        }
        void setRight()
        {
                int r;
                cout << "Enter number of right answer " << endl;
                cin >> r;
                right = r;
        }
        void setWrong()
        {
                int w;
                cout << "Enter number of wrong answer" << endl;
                cin >> w;
                wrong = w;
        }
        int NetScore()
        {
                netScore = rightWeightage() - wrongWeightage();
                return netScore;
        }
        int rightWeightage()
        {
                right_weightage = right * 3;
                return right_weightage;
        }
        int wrongWeightage()
        {
                wrong_weightage = wrong * 1;
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
//         rn1.setRollNo();
//         rn1.setRight();
//         rn1.setWrong();
//         cout << "The netScore of roll No." << rn1.getRollNo() << " is " << rn1.NetScore() << "\n"
//              << "which has " << rn1.rightAns() << " Right answer and " << rn1.wrongAns() << " Wrong Answer" << endl;
//         return 0;
// }