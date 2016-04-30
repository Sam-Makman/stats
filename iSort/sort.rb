nums = Array.new(100000){rand{0..1000000}}


len = nums.length() - 1
for i in 0..len
	min = i
	for j in i..len
		if nums.nil?
			print nil
		end
		if nums[j] < nums[min]
			min = j
		end
	end
	temp = nums[i]
	nums[i] = nums[min]
	nums[min] = temp
end