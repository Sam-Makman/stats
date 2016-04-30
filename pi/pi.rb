def dart
	(rand()*2 -1)
end

for k in 0..99
	start = Time.now
trials = 10000000
hit = 0.0
miss = 0
for i in 0..trials
	x = dart
	y = dart 
	if Math::sqrt( (x*x) + (y*y)) < 1
		hit = hit + 1
	end

end
pi = (hit/trials) * 4
	fin = Time.now
	puts fin - start
end