require 'pry'
require 'benchmark'

def primes(n)
  primes_arry = []
  (2..n).each do |i|
    primality = true
    (2..i).each do |j|
      break if j > i ** 0.5
      if i % j == 0
        primality = false
        break
      end
    end
    primes_arry << i if primality
  end
  primes_arry
end

def main
  n = gets.to_i
  print "#{primes(n).join(' ')}\n"
end

main
