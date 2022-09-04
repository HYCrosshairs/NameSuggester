#include <iostream>
#include <getopt.h>

std::string preListName;

void showUsage(const char *appName)
{
    // TODO: Use later log class to print those messages
    std::cout << "Usage: --<command_name> <command_parameters>" << appName << std::endl;
    std::cout << "\t--gender|-g: Select gender (girl/boy)" << std::endl;
    std::cout << "\t--origin|-o: Choose the origin of the name" << std::endl;
    std::cout << "\t--use-myList|-l: Select name from my pre-defined list" << std::endl;
}

/* Parse the command line arguments */
int parse_command_line(int argc, char **argv)
{
    int ret = 0;
    int opt;

    const option long_options[] = {
        {"gender",       no_argument, 0, 'g'},
        {"origin",  no_argument, 0, 'o'},
        {"use-myList", required_argument, 0, 'l'},
        {"help",        no_argument, 0, 'h'},
        {0, 0, 0, 0}
    };

    while ((opt = getopt_long(argc, argv, "gol:h", long_options, NULL)) != -1) {
        switch (opt) {
        case 'g':
            break;
        case 'o':
            break;
        case 'l':
            preListName = optarg;
            break;
        case 'h':
        default:
            showUsage(argv[0]);
            ret = -EINVAL;
            break;
        }
    }

    return ret;
}

int main(int argc, char *argv[])
{
    int rc{0};
    
    rc = parse_command_line(argc, argv);

    if (rc)
    {
        std::cerr << "Error when parsing argments, please show usage !" << std::endl;
        return rc;
    }

    return 0;
}
