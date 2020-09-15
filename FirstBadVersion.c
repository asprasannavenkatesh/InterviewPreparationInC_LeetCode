// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int low_version = 1, high_version = n;
    
    while(low_version < high_version) {
        int mid = (low_version + ((high_version - low_version) / 2));
        // Narrow down the search
        if(isBadVersion(mid)) {
            high_version = mid;
        } else {
            low_version = mid + 1;
        }
    }

    return low_version;
}
