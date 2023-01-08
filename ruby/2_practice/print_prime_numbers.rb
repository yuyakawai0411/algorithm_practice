require 'pry'
# TODO: rubyの素数判定でもっと効率的なものを調べる
def main
  n = gets.to_i
  primes = []
  (2..n).each do |i|
    count = 0
    (2..i).each do |j|
     count += 1 if i % j == 0
    end
    primes << i if count == 1
  end
  print "#{primes.join(' ')}\n"
end

main
