void check()
{
    if (input == 'r' && num == 3 || input == 'p' && num == 1 || input == 's' && num == 2)
    {
        cout << "you won this round!!";
        u++;
    }
    else if (input == 'r' && num == 1 || input == 'p' && num == 2 || input == 's' && num == 3)
    {
        cout << "its a tie, not bad";
    }
    else
    {
        cout << "you lost this round :(";
        c++;
    }
    cout << endl
         << endl;
}