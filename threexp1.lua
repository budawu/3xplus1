function threexp1(x)
    while x ~= 1 do
        if x % 2 == 0 then
            x = x // 2
            print(x)
        else
            x = 3 * x + 1
            print(x)
        end
    end
    print("OK")
end

threexp1(27)
