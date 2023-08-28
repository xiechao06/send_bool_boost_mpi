#include <boost/mpi.hpp>
#include <iostream>
#include <string>

namespace mpi = boost::mpi;

int main(int argc, char **argv)
{
    mpi::communicator world;
    mpi::environment env;

    auto rank = world.rank();
    bool done;

    if (rank == 0)
    {
        world.send(1, 0, true);
    }
    else
    {
        world.recv(0, 0, done);
        printf("%d\n", done);
    }
    // I must free the type by hand, otherwise yakasa complains
    // auto type = mpi::get_mpi_datatype(done);
    // MPI_Type_free(&type);

    return 0;
}