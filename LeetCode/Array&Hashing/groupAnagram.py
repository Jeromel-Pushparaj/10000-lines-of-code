def groupAnagrams(strs):
    mp ={}
    ans = []
        
    for s in strs:
        print(f"Starting of Loop:\nString: {s}\n Map: {mp}\n ans: {ans}\n")
        sorted_str = ''.join(sorted(s))
        print(f"s after sorting: {sorted_str}\n")
        if sorted_str in mp:
            ans[mp[sorted_str]].append(s)
            print(f"Inside If : Map: {mp}\nans: {ans}\n")
        else:
            mp[sorted_str] = len(ans)
            ans.append([s])
            print(f"Inside esle : Map: {mp}\nans: {ans}\n\n")
    print(ans)

strs = ["eat","tea","tan","ate","nat","bat"]
groupAnagrams(strs)

# Output: [["bat"],["nat","tan"],["ate","eat","tea"]]