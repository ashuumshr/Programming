# l1=input("enter: ").split(',')
# l2=input("enter: ").split(',')
# a1=list(l1)
# a2=list(l2)
# a3=a1+a2
# r=[]
# for i in a1:
#     for j in a2:
#         if(i==j):
#             r.append(i)
#             a1.remove(i)
#             a2.remove(i)
# print(r)
# for complexity O(n)
def find_common_elements(list1, list2):
    # Dictionary to store the frequency of elements in list1
    freq_map = {}
    for element in list1:
        freq_map[element] = freq_map.get(element, 0) + 1
        print(freq_map)
    
    common_elements = []
    
    # Iterate through list2 and check if elements are in freq_map
    for element in list2:
        if element in freq_map and freq_map[element] > 0:
            common_elements.append(element)
            freq_map[element] -= 1
    
    return common_elements

# Example usage:
list1 = [1, 2, 2, 3, 4, 5]
list2 = [2, 2, 3, 4, 4, 5, 6, 7]
print("Common elements:", find_common_elements(list1, list2))
