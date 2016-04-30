n = 10000000
total = 0.0
size = 20
for i in 0..n
	days = Array.new(365,0)

	for j in 0..size
		r = (rand()*356).to_i
		days[r] = days[r] + 1
	end

	collisions = 0
	for day in days
		if day >= 2
			collisions +=1
		end
	end
	total += collisions

end

puts total/n

prob = 1.0
for i in 0..size
	prob = prob*(365-i)/365
end
puts prob

