class Solution {

    /**
     * @param String[] $strs
     * @return String[][]
     */
    private function getKey($s) {
        return md5(serialize(count_chars($s,1)));
    }

    function groupAnagrams($strs) {
        $result = [];
        foreach ($strs as $s) {
            $key = $this->getKey($s);
            if (array_key_exists($key,$result))
                $result[$key][] = $s;
            else
                $result[$key] = [$s];
        }
        return $result;
    }
}
