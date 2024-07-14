
#include <bits/stdc++.h>
using namespace std;


void firstFit()
{
    int NB;
    cout << "enter the no. of block: " << endl;
    cin >> NB;
    int block[NB];

    int copy_of_block[NB];
    for (int i = 0; i < NB; i++)
    {
        cin >> block[i];
        copy_of_block[i] = block[i];
    }

    int NP;
    cout << "enter the no. of process: " << endl;
    cin >> NP;

    int process_in_block[NP + 1] = {0};

    int process[NP];
    for (int i = 0; i < NP; i++)
    {
        cin >> process[i];
    }
    for (int i = 0; i < NP; i++)
    {
        for (int j = 0; j < NB; j++)
        {
            if (process[i] <= block[j])
            {
                process_in_block[i + 1] = j + 1;
                block[j] -= process[i];
                break;
            }
        }
    }

    int internal = 0, external = 0;
    for (int i = 0; i < NB; i++)
    {
        if (block[i] < copy_of_block[i])
        {
            internal += block[i];
        }
        else
        {
            external = (internal + block[i]);
        }
    }

    for (int i = 1; i <= NP; i++)
    {
        if (!process_in_block[i])
        {
            cout << "memory has not  been allocated for process:" << i << endl;
            if (external >= process[i])
            {
                cout << "there is exteranl fragmentaion. available space is" << external << " that is more than process but not in contigeous." << endl;
            }
        }
        else
        {
            cout << "process:" << i << " is in block: " << process_in_block[i] << endl;
        }
    }
    cout << "internal fragmentation is:" << internal << endl;
}
void bestFit()
{

    int NB;
    cout << "enter the no. of block: " << endl;
    cin >> NB;
    int block[NB];

    int copy_of_block[NB];
    for (int i = 0; i < NB; i++)
    {
        cin >> block[i];
        copy_of_block[i] = block[i];
    }

    int NP;
    cout << "enter the no. of process: " << endl;
    cin >> NP;

    int process_in_block[NP + 1] = {0};

    int process[NP];
    for (int i = 0; i < NP; i++)
    {
        cin >> process[i];
    }
    for (int i = 0; i < NP; i++)
    {
        int idx = -1;
        for (int j = 0; j < NB; j++)
        {
            if (process[i] <= block[j])
            {
                if (idx == -1)
                {
                    idx = j;
                }
                else
                {
                    if (block[idx] - process[i] > block[j] - process[i])
                    {
                        idx = j;
                    }
                }
            }
        }
        if (idx != -1 && process[i] <= block[idx])
        {
            block[idx] = 0;
            process_in_block[i + 1] = idx + 1;
        }
    }

    int internal = 0, external = 0;
    for (int i = 0; i < NB; i++)
    {
        if (block[i] < copy_of_block[i])
        {
            internal += block[i];
        }
        else
        {
            external = (internal + block[i]);
        }
    }

    for (int i = 1; i <= NP; i++)
    {
        if (!process_in_block[i])
        {
            cout << "memory has not  been allocated for process:" << i << endl;
            if (external >= process[i])
            {
                cout << "there is exteranl fragmentaion. available space is" << external << " that is more than process but not in contigeous." << endl;
            }
        }
        else
        {
            cout << "process:" << i << " is in block: " << process_in_block[i] << endl;
        }
    }
    cout << "internal fragmentation is: " << internal << endl;
}
void wrostFit()
{
    int NB;
    cout << "enter the no. of block: " << endl;
    cin >> NB;
    int block[NB];
    int copy_of_block[NB];
    for (int i = 0; i < NB; i++)
    {
        cin >> block[i];
        copy_of_block[i] = block[i];
    }

    int NP;
    cout << "enter the no. of process: " << endl;
    cin >> NP;

    int process_in_block[NP + 1] = {0};

    int process[NP];
    for (int i = 0; i < NP; i++)
    {
        cin >> process[i];
    }
    for (int i = 0; i < NP; i++)
    {
        int idx = 0;
        for (int j = 0; j < NB; j++)
        {
            if (block[idx] <= block[j])
            {
                idx = j;
            }
        }
        if (process[i] < block[idx])
        {
            process_in_block[i + 1] = idx + 1;
            block[idx] = 0;
        }
    }

    int internal = 0, external = 0;
    for (int i = 0; i < NB; i++)
    {
        if (block[i] < copy_of_block[i])
        {
            internal += block[i];
        }
        else
        {
            external = (internal + block[i]);
        }
    }

    for (int i = 1; i <= NP; i++)
    {
        if (!process_in_block[i])
        {
            cout << "memory has not  been allocated for process:" << i << endl;

            if (external >= process[i])
            {
                cout << "there is exteranl fragmentaion. available space is" << external << " that is more than process but not in contigeous." << endl;
            }
        }
        else
        {
            cout << "process:" << i << " is in block: " << process_in_block[i] << endl;
        }
    }
    cout << "internal fragmentation is: " << internal << endl;
}

int main()
{

    cout << "enter '1' for firstfit, '2' for bestfit, '3' for wrostfit and greater than 3 for exit program: ";
    int test;
    cin >> test;
    while (test < 4)
    {
        switch (test)
        {
        case 1:
            firstFit();
            break;

        case 2:
            bestFit();
            break;
        case 3:
            wrostFit();
            break;
        }
        cout << endl;
        cout << "enter value of test: ";
        cin >> test;
        cout << endl;
    }

    return 0;
}