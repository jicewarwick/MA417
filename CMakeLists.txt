project(Chapter2)

add_executable(MonteCarlo)

add_subdirectory(../RandomNumberGernerator)

add_library(BrownianMotion SHARED BrownianMotion)
add_library(UniformSampler SHARED UniformSampler)

target_link_libraries(MonteCarlo BrownianMotion)
target_link_libraries(MonteCarlo UniformSampler)
