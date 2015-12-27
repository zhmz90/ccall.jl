if in("../src", LOAD_PATH)
    push!(LOAD_PATH,"../src")
end

using ccall
using Base.Test

# write your own tests here
@test 1 == 1

