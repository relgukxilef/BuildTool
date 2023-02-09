#include <vector>
#include <string_view>

struct graph_t {
    std::vector<char> characters;
    std::vector<std::pair<unsigned, unsigned>>
        strings_begin, strings_size;
    struct {
        std::vector<unsigned>
            parent, command, environment, working_directory,
            input_size, output_size,
            input_begin, output_begin;
    } processes;
    std::vector<unsigned> lists_strings_next, lists_strings;
};

unsigned process_started(
    graph_t& graph,
    std::string_view command, std::string_view environment,
    std::string_view working_directory
);
void file_read(graph_t& graph, unsigned process, std::string_view path);
void file_written(graph_t& graph, unsigned process, std::string_view path);