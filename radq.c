float radq(float a)
{
    float x = a;
    float epsilon = 1e-5;

    while ((x - a / x) > epsilon)
    {
        x = (x + a / x) / 2;
    }

    return x;
}