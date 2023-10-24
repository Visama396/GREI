float factorial(float m)
{
    if (m == 1)
    {
        return m;
    }
    return m * factorial(m-1);
}

float permutationen(float n)
{
    return factorial(n-1);
}

float variationen(float m, float n)
{
    return factorial(m) / factorial(m-n);
}

float kombinationen(float m, float n)
{
    if (m >= n)
    {
        return variationen(m, n) / permutationen(n);
    }

    return 0;
}