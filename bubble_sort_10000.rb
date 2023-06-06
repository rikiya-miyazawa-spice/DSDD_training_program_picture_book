def bubble_sort(array)
  n = array.length
  loop do
    swapped = false
    (n-1).times do |i|
      if array[i] > array[i+1]
        array[i], array[i+1] = array[i+1], array[i]
        swapped = true
      end
    end
    break unless swapped
  end
  array
end

# ランダムな10000個の数字の配列を生成
array = (1..10000).to_a.shuffle

# バブルソートで昇順に並び替え
sorted_array = bubble_sort(array)

# 結果を表示
puts sorted_array

# 実行結果
# ruby bubble_sort_10000.rb  4.77s user 0.04s system 99% cpu 4.825 total