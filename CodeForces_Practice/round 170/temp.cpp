using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int temp = 0;
        for (int arr : a)
            temp += arr;

        int temp1 = 0;
        int temp3 = 2 * r - temp;

        temp1 += min(temp3, temp);
        int ans = temp - temp1;

        int pairs = 0;
        for (int arr : a)
        {
            pairs += arr / 2;
        }

        temp1 += 2 * min(pairs, ans / 2);

        cout << temp1 << endl;
    }
    return 0;
}