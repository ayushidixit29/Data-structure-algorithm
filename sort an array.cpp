class Solution
{
public:
    void merge(vector<int> &v, int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
        vector<int> a(n1);
        vector<int> b(n2);
        for (int i = 0; i < n1; i++)
        {
            a[i] = v[i + l];
        }
        for (int i = 0; i < n2; i++)
        {
            b[i] = v[i + m + 1];
        }
        int i = 0;
        int j = 0;
        int k = l;
        while (i < n1 && j < n2)
        {
            if (a[i] <= b[j])
            {
                v[k++] = a[i++];
            }
            else
            {
                v[k++] = b[j++];
            }
        }
        while (i < n1)
        {
            v[k++] = a[i++];
        }
        while (j < n2)
        {
            v[k++] = b[j++];
        }
      }
    void mergesort(vector<int> &v, int l, int r)
    {
        if (l >= r)
        {
            return;
        }

        int m = l + (r - l) / 2;
        mergesort(v, l, m);
        mergesort(v, m + 1, r);
        return merge(v, l, m, r);
    }
    vector<int> sortArray(vector<int> &nums)
    {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        mergesort(nums, l, r);
        return nums;
    }
};
