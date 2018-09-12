

typedef struct {
    int x, y, z;
    char c;
} bunch_t;

void increaseBunch_p(bunch_t *inputBunch_p)
{
    inputBunch_p->x++;
    inputBunch_p->y++;
    inputBunch_p->z++;
    inputBunch_p->c++;
}

bunch_t increaseBunch(bunch_t inputBunch)
{
    bunch_t outputBunch;
    outputBunch.x = inputBunch.x++;
    outputBunch.y = inputBunch.y++;
    outputBunch.z = inputBunch.z++;
    outputBunch.c = inputBunch.c++;

    return outputBunch;
}

int main(void)
{
    bunch_t myBunch = {1, 2, 3, '7'};
    bunch_t newBunch = increaseBunch(myBunch);
    increaseBunch_p(&newBunch);

    while (1);
}
