import heapq
# find top most frequent
def topKFrequent(nums, k):
    # find the frequency of each number
    num_frequency_map = {}
    for num in nums:
        num_frequency_map[num] = num_frequency_map.get(num, 0) + 1
    top_k_elements = []
    # go through all numbers of the num_frequency_map
    # and push them in the top_k_elements, which will have
    # top k frequent numbers. If the heap size is more than k,
    # we remove the smallest(top) number
    for num, frequency in num_frequency_map.items():
        heapq.heappush(top_k_elements, (frequency, num))
        if len(top_k_elements) > k:
            heapq.heappop(top_k_elements)
    # create a list of top k numbers
    top_numbers = []
    while top_k_elements:
        top_numbers.append(heapq.heappop(top_k_elements)[1])
    return top_numbers

nums = [3,2,3,1,2,4,5,5,6,7,7,8,2,3,1,1,1,10,11,5,6,2,4,7,8,5]
k = 10

print(topKFrequent(nums, k))