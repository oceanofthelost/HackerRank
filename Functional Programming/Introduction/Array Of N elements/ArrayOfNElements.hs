
fn :: Int -> [Int]
fn n = [i | i <- [1..n], i<=n]

main = do
n <- readLn :: IO Int
print (length(fn(n)))
