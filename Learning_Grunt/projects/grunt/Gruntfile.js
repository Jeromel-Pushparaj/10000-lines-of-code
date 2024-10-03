module.exports = function(grunt){
    // Project configuration.
    grunt.initConfig({
        concat: {
        options: {
            separator: '\n',
            sourceMap: true,
            banner: "/*Writen by Jeromel*/\n"
        },
        css: {
            src: [
                '../css/**/*.css',
            ],
            dest: 'dist/style.css',
        },
        js: {
          src: [
              '../js/**/*.js',
          ],
          dest: 'dist/app.js',
      },
        },


        cssmin: {
          options: {
            mergeIntoShorthands: false,
            roundingPrecision: -1
          },
          target: {
            files: {
              '../../htdocs/css/style.min.css': ['dist/style.css']
            }
          }
        },

        copy: {
          main: {
            files: [
              // includes files within path
              {
              expand: true,
              flatten: true,
              filter: 'isFile',
              src: ['bower_components/jquery/dist/*'], 
              dest: '../../htdocs/js/jquery/', 
              
            },
        
            ],
          },
        },
        obfuscator: {
          options: {
              banner: '// obfuscated with grunt-contrib-obfuscator.\n',
              debugProtection: true,
              debugProtectionInterval: true,
              domainLock: ['jeromel.grunt.com']
          },
          task1: {
              options: {
                  // options for each sub task
              },
              files: {
                  '../../htdocs/js/app.o.js': [
                      'dist/app.js'
                  ]
              }
          }
        },

        uglify: {
          my_target: {
            options: {
              sourceMap: true,
            },
            files: {
              '../../htdocs/js/app.min.js': ['dist/app.js']
            }
          }
        },

        watch: {
            css: {
              files: [
                '../css/**/*.css',
              ],//"/**/*.css" - this means what ever file changed in that folder it runs the tasks
              tasks: [
                'concat:css',
                'cssmin'
              ],
              options: {
                spawn: true,
                livereload: true
              },
            },
              js: {
                files: [
                  '../js/**/*.js',
                ],//"/**/*.css" - this means what ever file changed in that folder it runs the tasks
                tasks: ['concat:js', 'uglify', 'obfuscator'],
                options: {
                  spawn: true,
                  livereload: true
                },
              },
          },
    });

    grunt.loadNpmTasks('grunt-contrib-obfuscator');
    grunt.loadNpmTasks('grunt-contrib-copy');
    grunt.loadNpmTasks('grunt-contrib-uglify');
    grunt.loadNpmTasks('grunt-contrib-cssmin');
    grunt.loadNpmTasks('grunt-contrib-watch');
    grunt.loadNpmTasks('grunt-contrib-concat');
    grunt.registerTask('default', ['copy','concat','cssmin','uglify','obfuscator','watch']);
}