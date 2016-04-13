// TBD / TBI :  http://ipestov.com/essential-plugins-for-grunt/
module.exports = function (grunt) {
    grunt.initConfig({
        watch: {
            src: {
                files: ['**/*.scss', '**/*.php', '**/*.js'],
                tasks: ['compass:dev']
            },
           options: {
                livereload: true,
            },
        },
        compass: {
            dev: {
                options: {
                    sassDir: 'sass',
                    cssDir: 'css',
                    imagesPath: 'assets/img',
                    noLineComments: false,
                    outputStyle: 'compressed'
                }
            }
        }
    });
    grunt.loadNpmTasks('grunt-contrib-compass');
    grunt.loadNpmTasks('grunt-contrib-sass');
    grunt.loadNpmTasks('grunt-contrib-watch');
};

