cmake_minimum_required(VERSION 3.8)
project (powder-keg)
find_package (32BLIT CONFIG REQUIRED PATHS ../32blit-sdk)
blit_executable (powder-keg powder-keg.cpp powder-keg.hpp TileData.cpp TileData.h GameState.cpp GameState.h Player.cpp Player.h Node.cpp Node.h)
blit_assets_yaml (powder-keg assets.yml)
blit_metadata (powder-keg metadata.yml)