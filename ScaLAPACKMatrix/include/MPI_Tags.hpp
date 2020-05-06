#ifndef dealii_mpi_tags_h
#define dealii_mpi_tags_h


#include <cstdint>

#include <deal.II/base/config.h>



      namespace Tags
      {
        /**
         * The enum with the tags.
         */
        enum enumeration : std::uint16_t
        {
          /// Utilities::MPI::some_to_some()
          mpi_some_to_some = 300,

          /// Utilities::MPI::compute_point_to_point_communication_pattern()
          compute_point_to_point_communication_pattern,

          /// GridTools::exchange_cell_data_to_ghosts():
          exchange_cell_data_to_ghosts,

          /// Triangulation<dim, spacedim>::communicate_locally_moved_vertices()
          triangulation_communicate_locally_moved_vertices,

          /// dof_handler_policy.cc: communicate_mg_ghost_cells()
          dofhandler_communicate_mg_ghost_cells,

          /// dof_handler_policy.cc: communicate_mg_ghost_cells()
          dofhandler_communicate_mg_ghost_cells_reply,

          /// mg_transfer_internal.cc: fill_copy_indices()
          mg_transfer_fill_copy_indices,

          /// SparsityTools::sparsity_tools_distribute_sparsity_pattern()
          sparsity_tools_distribute_sparsity_pattern,

          /// Dictionary::reinit()
          dictionary_reinit,

          /// ConsensusAlgorithmPayload::get_requesters()
          consensus_algorithm_payload_get_requesters,

          /// FETools::extrapolate()
          fe_tools_extrapolate,
          /// FETools::extrapolate(), allocate space for 10 rounds:
          fe_tools_extrapolate_end = fe_tools_extrapolate + 10,

          /// ConsensusAlgorithm_NBX::process
          consensus_algorithm_nbx_process_request,
          /// ConsensusAlgorithm_NBX::process
          consensus_algorithm_nbx_process_deliver,

          /// ConsensusAlgorithm_PEX::process
          consensus_algorithm_pex_process_request,
          /// ConsensusAlgorithm_PEX::process
          consensus_algorithm_pex_process_deliver,

          /// ConstructionData<dim,
          /// spacedim>::create_construction_data_from_triangulation_in_groups()
          fully_distributed_create,

          /// TriangulationBase<dim, spacedim>::fill_level_ghost_owners()
          triangulation_base_fill_level_ghost_owners,

          /// GridTools::compute_local_to_global_vertex_index_map
          grid_tools_compute_local_to_global_vertex_index_map,
          /// GridTools::compute_local_to_global_vertex_index_map second tag
          grid_tools_compute_local_to_global_vertex_index_map2,

          /// ParticleHandler<dim, spacedim>::send_recv_particles
          particle_handler_send_recv_particles_setup,
          /// ParticleHandler<dim, spacedim>::send_recv_particles
          particle_handler_send_recv_particles_send,

          /// ScaLAPACKMatrix<NumberType>::copy_to
          scalapack_copy_to,
          /// ScaLAPACKMatrix<NumberType>::copy_to
          scalapack_copy_to2,
          /// ScaLAPACKMatrix<NumberType>::copy_from
          scalapack_copy_from,

          /// ProcessGrid::ProcessGrid
          process_grid_constructor,

          /// 200 tags for Partitioner::import_from_ghosted_array_start
          partitioner_import_start,
          partitioner_import_end = partitioner_import_start + 200,

          /// 200 tags for Partitioner::export_to_ghosted_array_start
          partitioner_export_start,
          partitioner_export_end = partitioner_export_start + 200,


        };
      } // namespace Tags



#endif
