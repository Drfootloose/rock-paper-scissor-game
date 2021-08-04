void AI()
{
    srand(time(0));
    num = 1 + rand() % 3; //note: for computer's choice, 1->rock, 2->paper, 3->scissor
    cout << "Well, the computer chose" << endl;
    if (num == 1)
    {
        cout << "rock";
    }
    else if (num == 2)
    {
        cout << "paper";
    }
    else
    {
        cout << "scissor";
    }
    cout << endl;
}