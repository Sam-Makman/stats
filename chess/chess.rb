count = 0.0
n = 10000000

for k in 0..99
	start = Time.now
	for i in 0..n

		knightx = rand() * 8
		knightx = knightx.to_i

		knighty = rand() * 8
		knighty = knighty.to_i

		x = rand() * 8
		x = x.to_i

		y = rand() * 8
		y = y.to_i

		if knightx + 2 == x && knighty +1 == y
			count = count + 1
		elsif knightx + 2 == x && knighty - 1 == y
			count = count + 1
		elsif (knightx - 2 == x && knighty +1 ==y)
			count = count + 1
		elsif (knightx - 2 == x && knighty -1 ==y)
			count = count + 1
		elsif knightx + 1 == x && knighty +2 ==y
			count = count + 1
		elsif knightx - 1 == x && knighty +2 ==y
			count = count + 1
		elsif knightx + 1 == x && knighty -2 ==y
			count = count + 1
		elsif knightx -1 == x && knighty -2 ==y
			count = count + 1
		end
	end
	fin = Time.now
	puts fin - start
end