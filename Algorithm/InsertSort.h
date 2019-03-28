//
// Created by ASUS on 2019/3/28.
//

#ifndef INTERVIEW_INSRTSORT_H
#define INTERVIEW_INSRTSORT_H

#endif //INTERVIEW_INSRTSORT_H
#include <vector>
#include <iostream>
using namespace std;
void insertSort(vector<int> &nums)
{
    for(int i = 1;i<nums.size();i++)
    {
        int temp = nums[i];
        for(int j = i-1;j>=0;j--)
        {
            if(temp<nums[j])
            {
                nums[j+1] = nums[j];
                nums[j] = temp;
            } else
                break;
        }
    }
    for(vector<int>::iterator it = nums.begin();it!=nums.end();it++)
    {
        cout<<*it<<", ";
    }
    cout<<endl;
}