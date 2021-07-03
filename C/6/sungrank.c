void rank(ss *s)
{
    for (int i = 0; i < ARR_SIZE; i++)
    {
        (s + i)->rank = 1;
        for (int j = 0; j < ARR_SIZE; j++)
        {
            if ((s + i)->tot < (s + j)->tot)
            {
                (s + i)->rank = (s + i)->rank + 1;
            }
        }
    }
}