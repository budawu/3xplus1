def threexp1(x)

    while  x != 1
        if x%2 == 0
            x=x/2
            puts x
        else
            x = 3*x+1
            puts x
        end
    end

end


threexp1 42
