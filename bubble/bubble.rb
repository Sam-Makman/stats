
n = 10000

for k in 0..99
      start = Time.now
      swapped = true
      nums = Array.new(n){rand{0..1000000}}
      j=0
      while swapped
            swapped = false
            j = j + 1
            for i in 0..(n-j-1)
                  if nums[i] > nums[i+1]
                        temp = nums[i]
                        nums[i] = nums[i+1]
                        nums[i+1] = temp
                        swapped = true
                  end
            end
      end
      fin = Time.now
      puts fin - start
end