module.exports = function(grunt){
    // Project configuration.
    grunt.initConfig({
        concat: {
        options: {
            separator: '\n',
            sourceMap: true,
            banner: "/*Writen by Jeromel*/\n"
        },
        dist: {
            src: [
                '../css/**/*.css',
            ],
            dest: '../../htdocs/css/style.css',
        },
        },
        watch: {
            CSS: {
              files: ['../css/**/*.css'],//"/**/*.css" - this means what ever file changed in that folder it runs the tasks
              tasks: ['concat'],
              options: {
                spawn: false,
              },
            },
          },
    });

    grunt.loadNpmTasks('grunt-contrib-watch');
    grunt.loadNpmTasks('grunt-contrib-concat');
    grunt.registerTask('default', ['concat','watch']);
}